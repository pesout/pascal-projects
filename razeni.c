program Razeni;
uses crt;

var
  a, b, c, d, e : integer;
  var pole: array[1..99999999] of integer;

{----------------------------------------------}

Procedure vstup;

begin
   b := 1;
   for b:=1 to a do
     begin
       write('Zadej ',b,'. cislo: ');
       read(pole[b]);
     end;
end;

{----------------------------------------------}

Procedure razeni_jednotlive;

begin
   b := 1;
   for b:=1 to a-1 do
     begin
       if (pole[b] > pole[b+1]) then begin
                                        c := pole[b];
                                        pole[b] := pole[b+1];
                                        pole[b+1] := c;
                                     end;
     end;
end;

{----------------------------------------------}

Procedure razeni;

begin
   for d:=1 to a do razeni_jednotlive;
end;

{----------------------------------------------}

Procedure vystup;

begin
   writeln;writeln;
   write(' |');

   e := 1;
   for e:=1 to a do
     begin
       write(' ',pole[e],' |');
     end;
end;

{----------------------------------------------}

begin
   writeln('Razeni podle velikosti od nejmensiho.');
   write('Pocet cisel, ktera chcete seradit: ');
   read(a);
   writeln;

   vstup;
   razeni;
   vystup;

   readln;readln;
end.
