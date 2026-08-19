// Function: FUN_1404be590
// Addr: 1404be590
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be590(char *param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  char *pcVar4;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  undefined8 *puVar5;
  undefined8 *unaff_RBP;
  byte *unaff_RDI;
  undefined1 auStack_1e [6];
  undefined8 uStack_18;
  
  puVar5 = (undefined8 *)&stack0xfffffffffffffff0;
  cVar1 = '\x15';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  bRam00000000a84c0007 = bRam00000000a84c0007 | 7;
  uRam0000000000000007 = uRam0000000000000007 | 7;
  puVar3 = (uint *)((ulonglong)((byte)uRam0000000000000007 | 7) ^ 0x78);
  uVar2 = *puVar3;
  *(int *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(int *)CONCAT44(unaff_0000001c,unaff_EBX) + unaff_EBX;
  cRam00000001522bf9a9 = cRam00000001522bf9a9 + param_2;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  uVar2 = ((uint)puVar3 | uVar2) + 0x4404f39a;
  cVar1 = ((byte)uVar2 | *(byte *)(ulonglong)uVar2) + 0x25;
  pcVar4 = (char *)(ulonglong)(uint)(int)(short)CONCAT31((int3)(uVar2 >> 8),cVar1);
  *param_1 = *param_1 + (char)auStack_1e + 'X';
  *pcVar4 = *pcVar4 + cVar1;
  pcVar4[-0x4affda30] = pcVar4[-0x4affda30] + cVar1;
  cRam000000018ae4c1e7 = cRam000000018ae4c1e7 << 1;
  *param_1 = *param_1 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

