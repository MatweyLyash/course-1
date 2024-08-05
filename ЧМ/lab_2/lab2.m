X=[-9,-11,-14,-16,-20,-22,-25,-29];
Y=[0.3,0.7,0.9,1.4,1.6,2,2.5,2.8];
plot(X,Y);
n=2;
sum(X);
rvadr = sum(X.^2);
b=[sum(Y);sum(X.*Y)];
A=[n,sum(X);
    sum(X),rvadr];
%koef = inv(A)*b;
koef = A\b;

 y = @(X) (koef(1)+koef(2).*X); %строит регрессию 
 hold on
plot(X,y(X),'r-');
legend('Ломанная', 'ŷ = 0.1343 - 0.0817*Х ')

%почитать про мнк
