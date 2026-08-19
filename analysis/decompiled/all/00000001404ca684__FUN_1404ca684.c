// Function: FUN_1404ca684
// Addr: 1404ca684
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca684(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char in_AL;
  char cVar3;
  undefined7 in_register_00000001;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  char unaff_R12B;
  
  *(uint *)CONCAT71(in_register_00000001,in_AL) =
       *(uint *)CONCAT71(in_register_00000001,in_AL) & (uint)param_1;
  cVar3 = in_AL + *(char *)CONCAT71(in_register_00000001,in_AL);
  pbVar2 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + CONCAT71(unaff_00000019,unaff_BL));
  *pbVar2 = *pbVar2 | (byte)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT71(in_register_00000001,cVar3) + -0xd);
  *pcVar1 = *pcVar1 + cVar3;
  *unaff_RDI = *unaff_RSI;
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

