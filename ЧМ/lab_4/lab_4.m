% a = [ 2, 2, 1, 1, 1;
%       2, 3, 2, 1, 1;
%       4, 5, 4, 3, 1;
%       6, 5, 1, 1, 5;];
% A = [2, 2, 1, 1;
%      2, 3, 2, 1;
%      4, 5, 4, 3;
%      6, 5, 1, 1];
% B = [1; 1; 1; 5];
% 
% x1 = gaussian(A,B);
% 
% b = gauss(a);
% 
% G = reverse(b);
%  function triangleMatrix = gauss(a)
%     for i = 1:height(a)-1
%         for j = 1:height(a)-i
%             k = a(i+j,i)/a(i,i);
%             c = a(i,:);
%             a(i+j,:) = a(i+j,:)-(c.*k);
%         end
%     end
%     triangleMatrix = a;
%   end
% 
%   
%  %доставить сюда
%   
%   function G = reverse(a)
%     for i = height(a):-1:1
%         for j = i+1:height(a)
%             a(i, width(a)) = a(i, width(a)) - (a(i, j) * a(j,width(a))); 
%             a(i, j) = 0;
%         end
%         a(i,width(a)) = a(i,width(a))/ a(i,i);
%         a(i,i) = a(i,i)/a(i,i);
%     end
%     G = a;
%   end
% 
% 
% 
% 
% 
% 
% 
% 
% 
% function x = gaussian(A,b)
%     n = size(A, 1); % 1 - Возвращает кол-во строк , 2 - кол-во столбцов
%     
%     % Прямой ход метода Гаусса
%     for k = 1:n-1
%         for i = k+1:n
%             factor = A(i, k) / A(k, k);
%             A(i, k:n) = A(i, k:n) - factor * A(k, k:n);
%             b(i) = b(i) - factor * b(k);
%         end
%     end
%     
%     %Обратный ход
%     x = zeros(n, 1);
%     x(n) = b(n) / A(n, n);
%     
%     for k = n-1:-1:1
%         x(k) = (b(k) - A(k, k+1:n) * x(k+1:n)) / A(k, k);
%     end
% end



A = [2, 2, 1, 1;
    2, 3, 2, 1;
    4, 5, 4, 3;
    6, 5, 1, 1];
b = [1; 1; 1; 5];

X = A\b; %обратная матрица

x = gauss(A, b);




function x = gauss(A, b)
n = size(A, 1);
b=b.';
A = [A; b];


for i = 1:n-1
    [~, pivot] = max(abs(A(i:n,i)));% поиск индекса максимального по модулю элемента в i-ом столбце
    pivot = pivot + i - 1;% корректировка индекса для учета предыдущих строк

    if pivot ~= i % если индекс максимального элемента не равен i
        A([i pivot],:) = A([pivot i],:);% перестановка строк для обеспечения 
        % нахождения максимального элемента на i-ой позиции

    end

    
    for j = i+1:n
        factor = A(j,i) / A(i,i);
        A(j,i:n+1) = A(j,i:n+1) - factor * A(i,i:n+1);
    end
end


x = zeros(n,1);
for i = n:-1:1
    x(i) = (A(i,n+1) - A(i,i+1:n)*x(i+1:n)) / A(i,i);%начинаем с последней строки
end
end

