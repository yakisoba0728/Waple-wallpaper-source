// Function: FUN_1404b0264
// Addr: 1404b0264
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

void FUN_1404b0264(int param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char cVar5;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong in_FS_OFFSET;
  uint *unaff_retaddr;
  
  cVar5 = (char)((uint)param_1 >> 8);
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + param_1;
  *unaff_retaddr = *unaff_retaddr & (uint)unaff_retaddr;
  uVar2 = *unaff_retaddr;
  *(byte *)unaff_retaddr = (byte)*unaff_retaddr + (byte)unaff_retaddr;
  uVar2 = (int)CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),0x11) + 0x1511d100 +
          (uint)CARRY1((byte)uVar2,(byte)unaff_retaddr);
  *(char *)((ulonglong)uVar2 + 1) = *(char *)((ulonglong)uVar2 + 1) + (char)param_1;
  *param_4 = *param_4 + '\b';
  uVar3 = uVar2 + 0x64050002;
  *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 | (byte)uVar3;
  pcVar4 = (char *)(ulonglong)(uVar2 + 0x79238e02);
  pcVar4[0x210049ed] = pcVar4[0x210049ed] + cVar5;
  bVar1 = (byte)(uVar2 + 0x79238e02);
  *param_2 = *param_2 + bVar1;
  *pcVar4 = *pcVar4 + bVar1;
  pcVar4[in_FS_OFFSET] = pcVar4[in_FS_OFFSET] | bVar1;
  pcVar4 = (char *)((ulonglong)(uVar2 + 0x8e421c02) + 0x210049ed);
  *pcVar4 = *pcVar4 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

