// Function: FUN_1404a1b74
// Addr: 1404a1b74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1b74(byte param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char *in_RAX;
  uint unaff_EBX;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  uint *unaff_RDI;
  byte abStack_8 [8];
  
  *(uint *)(in_RAX + 8) = *(uint *)(in_RAX + 8) | unaff_ESI;
  *(uint *)(in_RAX + param_2) = *(uint *)(in_RAX + param_2) & (uint)in_RAX;
  pbVar1 = abStack_8 + CONCAT44(unaff_00000034,unaff_ESI);
  bVar2 = *pbVar1;
  bVar3 = (byte)in_RAX;
  *pbVar1 = *pbVar1 + bVar3;
  abStack_8[CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3 + *in_RAX + CARRY1(bVar2,bVar3))] =
       abStack_8[CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3 + *in_RAX + CARRY1(bVar2,bVar3))] ^
       param_1;
  *unaff_RDI = *unaff_RDI & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

