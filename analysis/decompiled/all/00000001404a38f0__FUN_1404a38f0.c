// Function: FUN_1404a38f0
// Addr: 1404a38f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a3909) overlaps instruction at (ram,0x0001404a3904)
    */

void FUN_1404a38f0(int *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint *in_RAX;
  longlong unaff_RBP;
  int unaff_ESI;
  byte *unaff_RDI;
  
  *param_1 = *param_1 + param_2;
  *(byte *)in_RAX = (byte)*in_RAX | (byte)in_RAX;
  *(int *)(&stack0x00000000 + (longlong)param_1) =
       *(int *)(&stack0x00000000 + (longlong)param_1) + unaff_ESI;
  *(char *)param_1 = (char)*param_1 + (char)param_2;
  bVar1 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI << 1 | (char)bVar1 < '\0';
  if ((char)bVar1 < '\0' != (char)*unaff_RDI < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000001044f390c = uRam00000001044f390c & (uint)in_RAX;
  uVar2 = *in_RAX;
  *(char *)(unaff_RBP + 0x20000673) = *(char *)(unaff_RBP + 0x20000673) + (char)((uint)param_2 >> 8)
  ;
  uRam00000001a44f3920 = uRam00000001a44f3920 & ((uint)in_RAX | uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

