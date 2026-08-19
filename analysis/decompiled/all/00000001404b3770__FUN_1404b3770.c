// Function: FUN_1404b3770
// Addr: 1404b3770
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3770(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte in_AL;
  undefined7 in_register_00000001;
  byte bVar4;
  char unaff_SPL;
  char *unaff_RSI;
  byte *unaff_RDI;
  
  bVar4 = (byte)param_2;
  bVar1 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar4;
  bVar2 = *(byte *)CONCAT71(in_register_00000001,in_AL);
  bVar3 = *(char *)CONCAT71(in_register_00000001,in_AL) - in_AL;
  *(byte *)CONCAT71(in_register_00000001,in_AL) = bVar3 - CARRY1(bVar1,bVar4);
  *unaff_RSI = (*unaff_RSI - (char)((ulonglong)param_2 >> 8)) -
               (bVar2 < in_AL || bVar3 < CARRY1(bVar1,bVar4));
  *param_4 = *param_4 + unaff_SPL;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

