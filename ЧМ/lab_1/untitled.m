f= @(x) sin(x);
f1 = @(x) log(x)./sqrt(x);
f2 = @(x) sin(x)./x.^2;
 a1=5;
 b1=7;
n=100;
h=(b1-a1)/n;
x=a1;
Sum=0;
s1=trapezoid(a1,b1,n,f1);
s2=integral(f1,a1,b1);
s3 = rectangle(a1,b1,n,f1);
s4 = simpson(a1, b1,n,f1);
err_abs = abs(s2-s1);%абсолютная погрешность
err_rel = err_abs/s2;%относительная погрешность

err_abs_s3=abs(s3-s1);
err_rel_s3=err_abs_s3/s3;

err_abs_s4=abs(s4-s1);
err_rel_s4=err_abs_s4/s4;



function Sum=trapezoid(a,b,n,f)
h=(b-a)/n;
x=a;
Sum=0;
while x<=(b-h)
    Sum = Sum+((f(x)+f(x+h))/2)*h;
    x=x+h;
end
end

function sum=rectangle(a1,b1,n,f1)
diks=(b1-a1)/n;
sum=0;
for i=0:n-1
    x = a1 + i*diks+diks/2;
    sum=sum+f1(x) * diks;
end
end

function sum=simpson(a,b,n,f1)
h = (b-a)/n;
x=a;
sum=0;
while x<=(b-h)
    sum=sum + (f1(x)+4*f1(x+h)+f1(x+2*h))*h/3;
    x=x+2*h;
end
end







