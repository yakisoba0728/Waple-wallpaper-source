// Function: FUN_1404a0244
// Addr: 1404a0244
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0244(byte *param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  uint *in_RAX;
  uint *unaff_RBX;
  uint unaff_ESI;
  char *pcVar3;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + (byte)in_RAX;
  *unaff_RBX = *unaff_RBX & (uint)in_RAX;
  *(char *)unaff_RBX = (char)*unaff_RBX + (char)param_1;
  bVar1 = (byte)in_RAX & (byte)*unaff_RBX;
  pcVar3 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  pcVar3[1] = pcVar3[1] + bVar1;
  *param_1 = *param_1 - 8;
  *pcVar3 = *pcVar3 + bVar1;
  pcVar3[-0x63fffcdf] = pcVar3[-0x63fffcdf] + (char)param_2;
  uVar2 = (uint)pcVar3;
  *unaff_RBX = *unaff_RBX & uVar2;
  pcVar3[-0xb] = pcVar3[-0xb] + (char)param_2;
  *param_4 = *param_4 + bVar1;
  *(uint *)((longlong)pcVar3 * 2) = *(uint *)((longlong)pcVar3 * 2) | uVar2;
  *param_2 = *param_2 | unaff_ESI;
  uVar2 = uVar2 + 0x26003f0;
  *param_1 = *param_1 ^ (byte)(uVar2 >> 8);
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 | (byte)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

