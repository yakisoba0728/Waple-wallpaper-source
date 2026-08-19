// Function: FUN_1404bdcfc
// Addr: 1404bdcfc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bdcfc(char *param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 in_RAX;
  undefined7 uVar5;
  char *pcVar4;
  byte bVar6;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RDI;
  float10 in_ST0;
  char acStack_8 [8];
  uint *puVar3;
  
  bVar6 = (byte)((ulonglong)param_1 >> 8);
  *(byte *)(unaff_RDI + 0x25) = *(byte *)(unaff_RDI + 0x25) & bVar6;
  cVar1 = (char)((ulonglong)in_RAX >> 8);
  if (!SCARRY1(cVar1,bVar6)) {
    uVar5 = (undefined7)
            (CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar1 + bVar6,(char)in_RAX)) >> 8);
    cVar1 = (char)in_RAX + (char)((ulonglong)param_2 >> 8);
    puVar3 = (uint *)CONCAT71(uVar5,cVar1);
    *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = (int)in_ST0;
    *puVar3 = *puVar3 & (uint)param_2;
    pcVar4 = (char *)CONCAT71(uVar5,cVar1);
    pcVar4[10] = pcVar4[10] + unaff_BH;
    *pcVar4 = *pcVar4 + (char)param_1;
    acStack_8[0] = '\v';
    acStack_8[1] = '\0';
    acStack_8[2] = -7;
    acStack_8[3] = 'u';
    acStack_8[4] = '\0';
    acStack_8[5] = '\0';
    acStack_8[6] = '\0';
    acStack_8[7] = '\0';
    uVar2 = (uint)pcVar4 & 0x25761700;
    acStack_8[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8] =
         acStack_8[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8] + (char)(uVar2 >> 8);
    *param_4 = *param_4 + (char)acStack_8;
    *param_2 = *param_2 | uVar2;
    *param_1 = *param_1 + (char)param_1;
    uVar2 = (uint)(short)uVar2;
    *(uint *)(ulonglong)uVar2 = *(uint *)(ulonglong)uVar2 | uVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

