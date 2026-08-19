// Function: FUN_1404c537c
// Addr: 1404c537c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c537c(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  undefined7 in_register_00000001;
  byte bVar3;
  undefined6 uVar4;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  byte *unaff_RSI;
  
  uVar4 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar3 = (byte)((ulonglong)param_1 >> 8) & *unaff_RSI;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x37);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT62(uVar4,CONCAT11(bVar3,(char)param_1)) =
       *(char *)CONCAT62(uVar4,CONCAT11(bVar3,(char)param_1)) + (char)param_2;
  cVar2 = in_AL + '\x01';
  pcVar1 = (char *)(param_2 + CONCAT71(in_register_00000001,cVar2) * 2);
  *pcVar1 = *pcVar1 + cVar2;
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

