// Function: FUN_1404c179c
// Addr: 1404c179c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404c1811) */

void FUN_1404c179c(char param_1,char param_2)

{
  byte bVar1;
  uint *in_RAX;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  undefined1 in_XMM1 [16];
  byte *pbVar2;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar1 = (char)in_RAX + (char)*in_RAX;
  pbVar2 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  pbVar2[unaff_RSI] = pbVar2[unaff_RSI] + param_2;
  *(undefined1 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = 0;
  pbVar2[0x11004a1d] = pbVar2[0x11004a1d] + (char)((ulonglong)in_RAX >> 8);
  *unaff_RDI = *unaff_RDI + param_1;
  *(uint *)(pbVar2 + in_FS_OFFSET) = *(uint *)(pbVar2 + in_FS_OFFSET) | (uint)pbVar2;
  sysenter();
  *pbVar2 = *pbVar2 | bVar1;
  rsqrtps(in_XMM1,*(undefined1 (*) [16])CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

