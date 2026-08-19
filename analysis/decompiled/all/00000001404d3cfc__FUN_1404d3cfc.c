// Function: FUN_1404d3cfc
// Addr: 1404d3cfc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3cfc(char *param_1,byte param_2)

{
  char *pcVar1;
  byte in_AL;
  char cVar2;
  byte in_AH;
  char cVar3;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte in_CF;
  bool bVar4;
  
  bVar4 = in_AH < param_2 || (byte)(in_AH - param_2) < in_CF;
  cVar3 = (in_AH - param_2) - in_CF;
  cVar2 = in_AL - bVar4;
  *(char *)(unaff_RBP + unaff_RBX) = *(char *)(unaff_RBP + unaff_RBX) + cVar3 + (in_AL < bVar4);
  *(char *)(unaff_RSI + -5) = *(char *)(unaff_RSI + -5) + cVar2;
  *param_1 = *param_1 + cVar3;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,cVar2)))
       + cVar2;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar3,cVar2 * '\x02'))) +
                   0x1004d3b);
  *pcVar1 = *pcVar1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

