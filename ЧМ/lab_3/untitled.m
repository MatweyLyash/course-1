%F(x)
%aps - точность
%определять отрезок самостоятельно
%подключить оси
eps=0.01;
F=  @(x) x.^3+12.*x-12;
 x=linspace(0.7,1);
% 
 plot(x,F(x));
 xlabel('Ox');
 ylabel('Oy');
 grid on;
 a=0.7;
 b=1;

%  point = dihotomiya(F,a,b,eps);
%метод деления отрезка пополам
% point = dihotomiya(F,a,b,eps);
% 
% function x = dihotomiya(F,a,b,eps)
%     while abs(F((a+b)/2))>=eps
%         c=(a+b)/2;
%         
%               if(F(b)*F(c)<0)
%                             a=c;
%                         elseif (F(a)*F(c)<0)
%                             b=c;
%               end
%         
%     end
% x = (a+b)/2;
% end

%newton metod
% point_1 = newton(F,a,b,eps);
% function x = newton(F,a,b,~)
% x=b;
% if(F(b)*diff(F(b),2)>0)
%     x=b;
% else
%     x=a;
% end
% F_prime = (F(b+eps)-F(b))/eps;
% while(abs(F(x))>=eps)
%     x=x-F(x)/F_prime;
%     F_prime=(F(b+eps)-F(b))/eps;
% end
% end


%Метод простой итерации(или метод Зейделя)
point_2 = simple(F,a,b,eps);
function x0 = simple(F,a,b,eps)
if(F(b)*diff(F(b),2)>0)
    x=b;
else
    x=a;
end
    
    while true
    x0=x;
    df = (F(x0+eps)-F(x0))./eps;
    M = 1.01 * df;
    x = x0 - F(x0) ./ M;
    
        if(abs(x - x0) <= eps )
            break;
        end
    end
end
    
   
   















