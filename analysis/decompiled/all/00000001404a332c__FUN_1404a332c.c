// Function: FUN_1404a332c
// Addr: 1404a332c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a332f) overlaps instruction at (ram,0x0001404a332d)
    */

void FUN_1404a332c(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char *in_RAX;
  char cVar6;
  char cVar7;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  int unaff_EDI;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  cVar6 = (char)((ulonglong)param_1 >> 8);
  out((short)param_2,(int)in_RAX);
  *(int *)(unaff_RSI + 0x16) = *(int *)(unaff_RSI + 0x16) + unaff_EDI;
  do {
    *(char *)(unaff_RSI + -8) = *(char *)(unaff_RSI + -8) + unaff_BH;
    if (-1 < (char)in_RAX) {
      pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar7,(char)param_2)) +
                       -0x38);
      *pcVar1 = *pcVar1 + (char)((uint)((int)in_RAX + 0x6d86c00) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *in_RAX = *in_RAX + (char)in_RAX;
    cVar7 = cVar7 << 1;
    uVar5 = (int)in_RAX + 0x5f6ef00;
    in_RAX = (char *)(ulonglong)uVar5;
    pcVar1 = in_RAX + 0x10049ed;
    cVar3 = *pcVar1;
    *pcVar1 = *pcVar1 + cVar6;
  } while (*pcVar1 != '\0' && SCARRY1(cVar3,cVar6) == *pcVar1 < '\0');
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH;
  bVar4 = (byte)(uVar5 >> 8);
  pbVar2 = (byte *)((ulonglong)
                    CONCAT31((int3)(char)bVar4,
                             (byte)uVar5 | *(byte *)(ulonglong)(uint)(int)(short)uVar5) + 0x7826000b
                   );
  *pbVar2 = *pbVar2 ^ (byte)param_1;
  *param_1 = *param_1 + (bVar4 | 10);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

