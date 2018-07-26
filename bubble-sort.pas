program bubble_sort;
uses crt;
var a, b, c, d, e : integer;
var numbers: array[1..99999999] of integer;


Procedure input;
begin
   write('Numbers: ');
   b := 1;
   for b:=1 to a do
     begin
       read(numbers[b]);
     end;
end;


Procedure sorting_individual;
begin
   b := 1;
   for b:=1 to a-1 do
     begin
       if (numbers[b] > numbers[b+1]) then
           begin
              c := numbers[b];
              numbers[b] := numbers[b+1];
              numbers[b+1] := c;
           end;
     end;
end;


Procedure sorting;
begin
   for d:=1 to a do sorting_individual;
end;


Procedure output;
begin
   writeln;writeln;
   write(' |');
   e := 1;
   for e:=1 to a do
     begin
       write(' ',numbers[e],' |');
     end;
end;


begin
   write('How many numbers: ');
   read(a);
   writeln;
   input;
   sorting;
   output;
   readln;readln;
end.
