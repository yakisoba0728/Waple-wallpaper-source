// Function: FUN_1404c0724
// Addr: 1404c0724
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0724(undefined8 param_1)

{
  uint *puVar1;
  byte in_AL;
  byte bVar2;
  undefined7 in_register_00000001;
  char cVar3;
  undefined7 uVar4;
  longlong unaff_RBP;
  byte *unaff_RSI;
  uint unaff_EDI;
  char unaff_R12B;
  char in_CF;
  float10 in_ST0;
  
  uVar4 = (undefined7)((ulonglong)param_1 >> 8);
  cVar3 = (char)param_1 + in_AL + in_CF;
  bVar2 = in_AL | *(byte *)CONCAT71(in_register_00000001,in_AL);
  puVar1 = (uint *)(CONCAT71(in_register_00000001,bVar2) + 0x4cd4000b);
  *puVar1 = *puVar1 | unaff_EDI;
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) - bVar2;
  *(longlong *)(CONCAT71(in_register_00000001,bVar2) + unaff_RBP) = (longlong)in_ST0;
  *unaff_RSI = *unaff_RSI ^ bVar2;
  *(char *)CONCAT71(uVar4,cVar3) = *(char *)CONCAT71(uVar4,cVar3) + unaff_R12B;
  *(char *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + cVar3;
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

