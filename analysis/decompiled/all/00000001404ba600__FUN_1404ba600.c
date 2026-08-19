// Function: FUN_1404ba600
// Addr: 1404ba600
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ba614) overlaps instruction at (ram,0x0001404ba60e)
    */

void FUN_1404ba600(char param_1,int param_2)

{
  char cVar1;
  uint *in_RAX;
  char *pcVar2;
  byte *unaff_RDI;
  byte in_CF;
  bool in_SF;
  undefined1 auStack_8 [8];
  
  if (in_SF) {
    in_RAX = (uint *)(ulonglong)((int)in_RAX + param_2 + (uint)in_CF);
    cRam000000014babb28d = cRam000000014babb28d + param_1;
    register0x00000020 = (BADSPACEBASE *)auStack_8;
  }
  *(char *)in_RAX = (char)*in_RAX + (char)((ulonglong)in_RAX >> 8);
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x341c0012;
  *in_RAX = *in_RAX ^ (uint)in_RAX;
  cVar1 = (char)in_RAX + -1;
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
  cRam00000001522bba05 = cRam00000001522bba05 + (char)param_2;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *pcVar2 = *pcVar2 + cVar1;
  uRam000000019450a628 = uRam000000019450a628 & (uint)pcVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

