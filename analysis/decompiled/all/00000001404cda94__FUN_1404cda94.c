// Function: FUN_1404cda94
// Addr: 1404cda94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cda94(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  byte bVar3;
  char in_AL;
  undefined7 in_register_00000001;
  undefined7 uVar4;
  byte unaff_BH;
  undefined4 *unaff_RDI;
  char unaff_R12B;
  
  uVar4 = (undefined7)((ulonglong)param_1 >> 8);
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  if ((POPCOUNT(unaff_BH ^
                *(byte *)(CONCAT71(in_register_00000001,in_AL) +
                         CONCAT71(in_register_00000001,in_AL))) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = (byte)param_1 >> 1;
  *(char *)CONCAT71(uVar4,bVar3) = *(char *)CONCAT71(uVar4,bVar3) + unaff_R12B;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x32ffbf4f);
  *pcVar1 = *pcVar1 + (char)((ushort)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

