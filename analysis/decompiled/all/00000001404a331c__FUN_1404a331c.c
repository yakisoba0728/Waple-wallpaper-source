// Function: FUN_1404a331c
// Addr: 1404a331c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a331c(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint *in_RAX;
  char cVar7;
  char cVar8;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  int iVar6;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  cVar7 = (char)((ulonglong)param_1 >> 8);
  out((short)param_2,(uint)in_RAX);
  *in_RAX = *in_RAX & (uint)in_RAX;
  do {
    *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
    cVar8 = cVar8 << 1;
    iVar6 = (int)in_RAX;
    uVar5 = iVar6 + 0x5f6ef00;
    pcVar1 = (char *)((ulonglong)uVar5 + 0x10049ed);
    cVar3 = *pcVar1;
    *pcVar1 = *pcVar1 + cVar7;
    if (*pcVar1 == '\0' || SCARRY1(cVar3,cVar7) != *pcVar1 < '\0') {
      *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
           *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH;
      bVar4 = (byte)(uVar5 >> 8);
      pbVar2 = (byte *)((ulonglong)
                        CONCAT31((int3)(char)bVar4,
                                 (byte)uVar5 | *(byte *)(ulonglong)(uint)(int)(short)uVar5) +
                       0x7826000b);
      *pbVar2 = *pbVar2 ^ (byte)param_1;
      *param_1 = *param_1 + (bVar4 | 10);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    *(char *)(unaff_RSI + -8) = *(char *)(unaff_RSI + -8) + unaff_BH;
    in_RAX = (uint *)(ulonglong)uVar5;
  } while ((char)(byte)uVar5 < '\0');
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar8,(char)param_2)) +
                   -0x38);
  *pcVar1 = *pcVar1 + (char)((uint)(iVar6 + 0xccf5b00) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

