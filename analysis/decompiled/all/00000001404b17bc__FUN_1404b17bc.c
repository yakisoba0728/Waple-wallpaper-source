// Function: FUN_1404b17bc
// Addr: 1404b17bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b17bc(longlong param_1,byte *param_2)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  undefined4 in_EAX;
  undefined3 uVar7;
  undefined4 uVar6;
  undefined4 in_register_00000004;
  byte bVar8;
  char unaff_BL;
  undefined7 unaff_00000019;
  uint unaff_ESP;
  longlong in_FS_OFFSET;
  int iVar5;
  
  bVar8 = (byte)param_2;
  puVar1 = (uint *)(CONCAT44(in_register_00000004,in_EAX) + 0x12d4a400 + param_1);
  *puVar1 = *puVar1 & unaff_ESP;
  *param_2 = *param_2 + unaff_BL;
  uVar7 = (undefined3)((uint)in_EAX >> 8);
  bVar4 = in(10);
  iVar5 = CONCAT31(uVar7,bVar4);
  bVar3 = *(byte *)CONCAT71(unaff_00000019,unaff_BL);
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + bVar8;
  piVar2 = (int *)(in_FS_OFFSET + CONCAT44(in_register_00000004,iVar5));
  *piVar2 = *piVar2 + iVar5 + (uint)CARRY1(bVar3,bVar8);
  uVar6 = CONCAT31(uVar7,bVar4 + 0x54);
  *(byte *)CONCAT44(in_register_00000004,uVar6) =
       *(char *)CONCAT44(in_register_00000004,uVar6) + bVar4 + 0x54 + (0xab < bVar4);
  *param_2 = *param_2 ^ bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

