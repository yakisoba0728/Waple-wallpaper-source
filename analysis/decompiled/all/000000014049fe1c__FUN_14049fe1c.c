// Function: FUN_14049fe1c
// Addr: 14049fe1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fe1c(byte param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 in_EAX;
  undefined3 uVar7;
  uint uVar6;
  undefined4 in_register_00000004;
  char cVar8;
  byte *unaff_RBX;
  char unaff_SPL;
  undefined4 *unaff_RDI;
  undefined4 uVar5;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  pbVar2 = (byte *)(unaff_RDI + 1);
  *unaff_RDI = in_EAX;
  uVar7 = (undefined3)((uint)in_EAX >> 8);
  bVar4 = (byte)in_EAX | *unaff_RBX;
  uVar5 = CONCAT31(uVar7,bVar4);
  *(char *)CONCAT44(in_register_00000004,uVar5) =
       *(char *)CONCAT44(in_register_00000004,uVar5) + cVar8;
  *param_4 = *param_4 + unaff_SPL;
  *(byte *)CONCAT44(in_register_00000004,uVar5) =
       *(char *)CONCAT44(in_register_00000004,uVar5) + bVar4;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar5) + -0x54fffcf6);
  *pcVar1 = *pcVar1 + (char)param_2;
  bVar3 = *unaff_RBX;
  uVar6 = CONCAT31(uVar7,bVar4 | bVar3);
  *(char *)CONCAT44(in_register_00000004,uVar6) =
       *(char *)CONCAT44(in_register_00000004,uVar6) + cVar8;
  *param_4 = *param_4 + (bVar4 | bVar3);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + param_1;
  if (!CARRY1(bVar3,param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000001b44efe50 = uRam00000001b44efe50 & uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

