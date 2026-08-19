// Function: FUN_1404c2f60
// Addr: 1404c2f60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2f60(longlong param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  undefined1 in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  
  cVar2 = in_AH * '\x02';
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL));
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) + param_1);
  *pcVar1 = *pcVar1 + param_2;
  *(undefined1 *)(unaff_RSI + 0x29) = *(undefined1 *)(unaff_RSI + 0x29);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

