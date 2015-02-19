var
   pesan: string;

procedure bacaPesan();
begin
	 write('masukkan pesan: ');
   readln(pesan);
end;

(* program utama *)
begin
   bacaPesan();
   writeln('pesan = ', pesan);
end.