// Function: FUN_1404bf6ec
// Addr: 1404bf6ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf6ec(char *param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong in_RAX;
  uint unaff_EBX;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  byte *pbVar4;
  
  *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(uint *)CONCAT44(unaff_00000034,unaff_ESI) & unaff_ESI;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  puVar1 = (uint *)(in_RAX * 2);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + unaff_EBX;
  uVar3 = (int)in_RAX + 0x11e013f0 + (uint)CARRY4(uVar3,unaff_EBX);
  pbVar4 = (byte *)(ulonglong)uVar3;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  bVar2 = (byte)uVar3;
  *pbVar4 = *pbVar4 + bVar2;
  *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(int *)CONCAT44(unaff_00000034,unaff_ESI) + unaff_EBX;
  *pbVar4 = *pbVar4 | bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

