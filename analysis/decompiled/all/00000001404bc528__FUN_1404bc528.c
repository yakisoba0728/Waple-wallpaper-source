// Function: FUN_1404bc528
// Addr: 1404bc528
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc528(longlong param_1,int param_2)

{
  char *pcVar1;
  int *piVar2;
  byte bVar3;
  undefined4 in_EAX;
  undefined3 uVar6;
  undefined4 uVar5;
  undefined4 in_register_00000004;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  uint uVar4;
  
  *(byte *)(param_1 + -0x469fffde) = *(byte *)(param_1 + -0x469fffde) ^ unaff_BH;
  uVar6 = (undefined3)((uint)in_EAX >> 8);
  bVar3 = (byte)in_EAX & *(byte *)CONCAT44(in_register_00000004,in_EAX);
  uVar4 = CONCAT31(uVar6,bVar3);
  *(uint *)CONCAT44(in_register_00000004,uVar4) =
       *(uint *)CONCAT44(in_register_00000004,uVar4) & uVar4;
  *(byte *)CONCAT44(in_register_00000004,uVar4) =
       *(char *)CONCAT44(in_register_00000004,uVar4) + bVar3;
  *(byte *)(param_1 + -0x469fffde) = *(byte *)(param_1 + -0x469fffde) ^ unaff_BH;
  bVar3 = bVar3 & *(byte *)CONCAT44(in_register_00000004,uVar4);
  uVar5 = CONCAT31(uVar6,bVar3);
  piVar2 = (int *)(CONCAT44(in_register_00000004,uVar5) + 0x11d81400);
  *piVar2 = *piVar2 + param_2;
  pcVar1 = (char *)(param_1 + CONCAT44(in_register_00000004,uVar5));
  *pcVar1 = *pcVar1 + (char)param_1;
  cRam00000001614bc635 = cRam00000001614bc635 + bVar3;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

