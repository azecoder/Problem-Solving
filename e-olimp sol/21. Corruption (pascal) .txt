    const mx=100000;
     var a:array[0..4*mx] of double;
         i,n:longint;
         p,d:double;
     
    procedure sort(l,r: longint);
          var
             i,j:longint;
             x,y:double;
          begin
             i:=l;
             j:=r;
             x:=a[l+random(r-l)];
             repeat
               while a[i]<x do
                inc(i);
               while x<a[j] do
                dec(j);
               if not(i>j) then
                 begin
                    y:=a[i];
                    a[i]:=a[j];
                    a[j]:=y;
                    inc(i);
                    j:=j-1;
                 end;
             until i>j;
             if l<j then
               sort(l,j);
             if i<r then
               sort(i,r);
          end;
     
    procedure insert(x:double);
     var i:longint;
      begin
       inc(n);
       i:=n;
       a[0]:=x;
        while(x<a[i div 2]) do begin
         a[i]:=a[i div 2];
         i:=i div 2;
        end;
         a[i]:=x;
       end;
     
     procedure del(j:longint);
      var i,c:longint;
          l,d:double;
          stop:boolean;
       begin
        d:=a[j];
        l:=a[n];
         dec(n);
         i:=1;
         stop:=false;
          while (2*i<=n)and(not stop) do begin
           c:=2*i;
           if c<n then
            if a[c+1]<a[c] then inc(c);
             if l>a[c] then begin
              a[i]:=a[c];
              i:=c;
             end else stop:=true;
          end;
           a[i]:=l;
          end;
     
     
     
    begin
     assign(input,'input.txt'); reset(input);
     assign(output,'output.txt'); rewrite(output);
      read(n,p);
       for i:=1 to n do read(a[i]);
        if p=0 then begin
         for i:=2 to n do a[1]:=a[1]+a[i];
          writeln(a[1]:0:2);
          exit;
         end;
          sort(1,n);
            if n=1 then begin
             writeln(a[1]:0:2);
             exit;
            end else
             if n=2 then begin
              writeln((round(100*(a[1]+a[2]))-round(p*(a[1]+a[2])))/100:0:2);
              exit;
             end;
           while n>2 do begin
     
            d:=a[1];
     
             if a[2]<a[3] then begin
              d:=d+a[2];
              d:=(round(100*d)-round(p*d))/100;
              del(2);
              del(1);
              insert(d);
             end else begin
              d:=d+a[3];
               d:=(round(100*d)-round(p*d))/100;
              del(3);
              del(1);
              insert(d);
             end;
              if n=2 then break;
            end;
              writeln((round(100*(a[1]+a[2]))-round(p*(a[1]+a[2])))/100:0:2);
           end.
