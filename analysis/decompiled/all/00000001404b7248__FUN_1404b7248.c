// Function: FUN_1404b7248
// Addr: 1404b7248
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7248(byte param_1)

{
  char *pcVar1;
  byte bVar2;
  undefined4 in_EAX;
  uint uVar3;
  undefined4 in_register_00000004;
  char unaff_BH;
  undefined3 uVar4;
  
  bVar2 = bRam4900134901004b70;
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  uVar3 = CONCAT31(uVar4,bRam4900134901004b70);
  *(uint *)CONCAT44(in_register_00000004,uVar3) =
       *(uint *)CONCAT44(in_register_00000004,uVar3) | uVar3;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT31(uVar4,(bVar2 | *(byte *)CONCAT44(in_register_00000004,uVar3))
                                            ^ param_1)) + -0x57dffff3);
  *pcVar1 = *pcVar1 - unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

