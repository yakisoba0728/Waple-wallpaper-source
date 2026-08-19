// Function: FUN_1404d7754
// Addr: 1404d7754
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d77b5) overlaps instruction at (ram,0x0001404d77b4)
    */

void FUN_1404d7754(char *param_1,char *param_2,undefined8 param_3,longlong param_4)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar6;
  byte *in_RAX;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_ESI;
  uint *unaff_RDI;
  char unaff_R12B;
  longlong in_FS_OFFSET;
  bool in_CF;
  bool in_ZF;
  byte *pbVar5;
  
  if (in_CF || in_ZF) {
    cRam0000000021004d64 = cRam0000000021004d64 + 'd';
    *unaff_RDI = *unaff_RDI | unaff_ESI;
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x47ffc8f6);
    *pcVar1 = *pcVar1 + unaff_BH;
    *(char *)(in_FS_OFFSET + param_4) = *(char *)(in_FS_OFFSET + param_4) + unaff_R12B;
  }
  else {
    cVar6 = (char)((ulonglong)in_RAX >> 8);
    *param_1 = *param_1 + cVar6;
    bVar3 = (byte)in_RAX;
    *in_RAX = *in_RAX + bVar3;
    bVar2 = *in_RAX;
    *in_RAX = *in_RAX + bVar3;
    *unaff_RDI = *unaff_RDI + unaff_ESI + (uint)CARRY1(bVar2,bVar3);
    pbVar5 = (byte *)((longlong)unaff_RDI + 0x50003711);
    bVar2 = *pbVar5;
    *pbVar5 = *pbVar5 + (byte)param_2;
    if (!CARRY1(bVar2,(byte)param_2) && *pbVar5 != 0) {
      *param_1 = *param_1 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  uVar4 = in(0x10);
  pbVar5 = (byte *)CONCAT71(0x21004d,uVar4);
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 + (byte)param_1;
  *(uint *)(pbVar5 + in_FS_OFFSET) =
       *(int *)(pbVar5 + in_FS_OFFSET) + (int)pbVar5 + (uint)CARRY1(bVar2,(byte)param_1);
  *param_2 = *param_2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

