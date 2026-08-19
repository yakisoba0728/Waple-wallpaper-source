// Function: FUN_1404a0230
// Addr: 1404a0230
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a0247) overlaps instruction at (ram,0x0001404a0246)
    */

void FUN_1404a0230(byte *param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint in_EAX;
  uint uVar2;
  char unaff_BL;
  undefined7 unaff_00000019;
  uint unaff_ESI;
  uint *puVar3;
  
  uVar2 = in_EAX | 0x8000be4;
  if (uVar2 == 0) {
    param_1[0x220b0003] = param_1[0x220b0003] + unaff_BL;
    uVar2 = uRam0000000000000000;
    puVar3 = (uint *)(ulonglong)uRam0000000000000000;
    *param_2 = *param_2 + (int)param_1;
    *puVar3 = *puVar3 & uVar2;
    *(char *)puVar3 = (char)*puVar3 + (char)uVar2;
    *(uint *)CONCAT71(unaff_00000019,unaff_BL) = *(uint *)CONCAT71(unaff_00000019,unaff_BL) & uVar2;
    param_1[-0xaaffffd] = param_1[-0xaaffffd] + unaff_BL;
  }
  else {
    param_1[0x220b0003] = param_1[0x220b0003] + unaff_BL;
    uVar2 = uVar2 + *(int *)(ulonglong)uVar2;
    puVar3 = (uint *)(ulonglong)uVar2;
    *param_2 = *param_2 + (int)param_1;
    *puVar3 = *puVar3 & uVar2;
    *(byte *)puVar3 = (char)*puVar3 + (byte)uVar2;
    *(uint *)CONCAT71(unaff_00000019,unaff_BL) = *(uint *)CONCAT71(unaff_00000019,unaff_BL) & uVar2;
    *(char *)CONCAT71(unaff_00000019,unaff_BL) =
         *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_1;
    bVar1 = (byte)uVar2 & *(byte *)CONCAT71(unaff_00000019,unaff_BL);
    uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
    puVar3 = (uint *)(ulonglong)uVar2;
    *(char *)((longlong)puVar3 + 1) = *(char *)((longlong)puVar3 + 1) + bVar1;
    *param_1 = *param_1 - 8;
    *(byte *)puVar3 = (char)*puVar3 + bVar1;
    *(char *)((longlong)puVar3 + -0x63fffcdf) =
         *(char *)((longlong)puVar3 + -0x63fffcdf) + (char)param_2;
    *(uint *)CONCAT71(unaff_00000019,unaff_BL) = *(uint *)CONCAT71(unaff_00000019,unaff_BL) & uVar2;
    *(char *)((longlong)puVar3 + -0xb) = *(char *)((longlong)puVar3 + -0xb) + (char)param_2;
  }
  *param_4 = *param_4 + (char)puVar3;
  *(uint *)((longlong)puVar3 * 2) = *(uint *)((longlong)puVar3 * 2) | (uint)puVar3;
  *param_2 = *param_2 | unaff_ESI;
  uVar2 = (uint)puVar3 + 0x26003f0;
  *param_1 = *param_1 ^ (byte)(uVar2 >> 8);
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 | (byte)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

