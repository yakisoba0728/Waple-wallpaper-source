// Function: FUN_1404cb684
// Addr: 1404cb684
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cb713) overlaps instruction at (ram,0x0001404cb712)
    */
/* WARNING: Removing unreachable block (ram,0x0001404cb6bb) */
/* WARNING: Removing unreachable block (ram,0x0001404cb6b3) */
/* WARNING: Removing unreachable block (ram,0x0001404cb6a3) */
/* WARNING: Removing unreachable block (ram,0x0001404cb6e6) */
/* WARNING: Removing unreachable block (ram,0x0001404cb722) */
/* WARNING: Removing unreachable block (ram,0x0001404cb726) */
/* WARNING: Removing unreachable block (ram,0x0001404cb713) */
/* WARNING: Removing unreachable block (ram,0x0001404cb6ef) */
/* WARNING: Removing unreachable block (ram,0x0001404cb736) */
/* WARNING: Removing unreachable block (ram,0x0001404cb703) */
/* WARNING: Removing unreachable block (ram,0x0001404cb715) */
/* WARNING: Removing unreachable block (ram,0x0001404cb6b7) */

void FUN_1404cb684(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar4;
  char cVar5;
  byte *pbVar3;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  pcVar4 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x4c,(char)param_1));
  *pcVar4 = *pcVar4 + (char)((ulonglong)&stack0x00000000 >> 8);
  uVar1 = (int)&stack0x00000000 + 0xf4050002;
  uVar2 = uVar1 ^ *(uint *)(ulonglong)uVar1;
  pbVar3 = (byte *)(ulonglong)uVar2;
  if (pcVar4 == (char *)0x1) {
    pbVar3[0x21004cb5] = pbVar3[0x21004cb5] + (char)(uVar2 >> 8);
    *pbVar3 = *pbVar3 + (byte)uVar2;
    *pbVar3 = *pbVar3 + cVar5;
    uVar2 = CONCAT31((int3)(uVar2 >> 8),(byte)uVar2 | *pbVar3);
    uVar2 = uVar2 ^ *(uint *)(ulonglong)uVar2;
    in(CONCAT11(cVar5,(byte)param_2 ^ (byte)(uVar1 >> 8)));
    cRamffffffffffff4cff =
         cRamffffffffffff4cff +
         ((byte)(uVar2 >> 8) ^ (byte)((uint)*(undefined4 *)(ulonglong)uVar2 >> 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

