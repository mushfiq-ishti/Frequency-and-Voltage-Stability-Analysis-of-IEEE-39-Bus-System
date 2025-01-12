% R & X in Ohms
% Q in MVAR
%V in kV

%filename="":
%load(filename);
%make table in T variable
FVSI_matrix=[];
for i=1:size(T,1)
    t_row=T(i,:);
    sending_bus=char(t_row.From); %From in the dataset for sending bus
    sending_bus=sending_bus(2:end);
    sending_bus=str2num(sending_bus);
    receiving_bus=char(t_row.To); %To in the dataset for receiving bus
    receiving_bus=receiving_bus(2:end);
    receiving_bus=str2num(receiving_bus);
    V=double(t_row.V);
    Q=abs(double(t_row.Q));
    R=double(t_row.R);
    X=double(t_row.X);
    t_FVSI= (4*(R^2+X^2)*Q)/(V^2 * X);
    FVSI_matrix=[FVSI_matrix;sending_bus,receiving_bus,t_FVSI];
    temp_col=FVSI_matrix(:,end);
    temp_col=temp_col./max(temp_col);
end
 temp_col=FVSI_matrix(:,end);
 temp_col=temp_col./max(temp_col);
 FVSI_matrix(:,end)=temp_col;
    

