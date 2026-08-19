// Function: FUN_1404b0274
// Addr: 1404b0274
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b033d) overlaps instruction at (ram,0x0001404b033a)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b033d) */
/* WARNING: Removing unreachable block (ram,0x0001404b02b4) */
/* WARNING: Removing unreachable block (ram,0x0001404b02e8) */
/* WARNING: Removing unreachable block (ram,0x0001404b02ca) */
/* WARNING: Removing unreachable block (ram,0x0001404b02ef) */
/* WARNING: Removing unreachable block (ram,0x0001404b02f7) */
/* WARNING: Removing unreachable block (ram,0x0001404b02fd) */
/* WARNING: Removing unreachable block (ram,0x0001404b0316) */
/* WARNING: Removing unreachable block (ram,0x0001404b0327) */
/* WARNING: Removing unreachable block (ram,0x0001404b032f) */
/* WARNING: Removing unreachable block (ram,0x0001404b02a0) */

void FUN_1404b0274(longlong param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *in_RAX;
  char *pcVar3;
  char cVar4;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong in_FS_OFFSET;
  
  cVar4 = (char)((ulonglong)param_1 >> 8);
  *(longlong *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(longlong *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + param_1;
  uVar2 = (uint)in_RAX;
  uRam00000001a4500280 = uRam00000001a4500280 & uVar2;
  *in_RAX = *in_RAX | (byte)in_RAX;
  pcVar3 = (char *)(ulonglong)(uVar2 + 0x151e8e00);
  pcVar3[0x210049ed] = pcVar3[0x210049ed] + cVar4;
  bVar1 = (byte)(uVar2 + 0x151e8e00);
  *param_2 = *param_2 + bVar1;
  *pcVar3 = *pcVar3 + bVar1;
  pcVar3[in_FS_OFFSET] = pcVar3[in_FS_OFFSET] | bVar1;
  pcVar3 = (char *)((ulonglong)(uVar2 + 0x2a3d1c00) + 0x210049ed);
  *pcVar3 = *pcVar3 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

