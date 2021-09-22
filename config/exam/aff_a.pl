aff_a -p
aff_a
check -t ====
%tests = (
	"$program" => "a\n",
	"$program 'dubO a POIL'" => "a\n",
	"$program 'a'" => "a\n",
	"$program 'zz sent le poney'" => "\n",
);
====