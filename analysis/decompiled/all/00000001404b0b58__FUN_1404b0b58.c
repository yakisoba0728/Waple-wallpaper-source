// Function: FUN_1404b0b58
// Addr: 1404b0b58
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0b58(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char cVar5;
  int *in_RAX;
  byte bVar6;
  char cVar7;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  char *pcVar4;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  bVar6 = (byte)param_2;
  param_2[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
       param_2[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] + cVar7;
  cVar5 = (char)((ulonglong)in_RAX >> 8);
  *(char *)((longlong)param_2 * 2) = *(char *)((longlong)param_2 * 2) + cVar5;
  param_1[(longlong)param_2] = param_1[(longlong)param_2] + bVar6;
  pbVar1 = (byte *)(param_2 + unaff_RBP + 0x158cf900);
  *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
  *(char *)((longlong)in_RAX + 9) = *(char *)((longlong)in_RAX + 9) + cVar5;
  *param_4 = *param_4 + unaff_SPL;
  if ((POPCOUNT(*param_4) & 1U) != 0) {
    param_2[-0x3c] = param_2[-0x3c] + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)in_RAX = (char)*in_RAX + bVar6;
  if ((char)*in_RAX != '\0') {
    bVar2 = *(byte *)CONCAT71(unaff_00000021,unaff_SPL);
    *(byte *)CONCAT71(unaff_00000021,unaff_SPL) =
         *(char *)CONCAT71(unaff_00000021,unaff_SPL) + (byte)param_1;
    *in_RAX = *in_RAX + (int)in_RAX + (uint)CARRY1(bVar2,(byte)param_1);
    *(byte *)((longlong)in_RAX + (longlong)param_2) =
         *(byte *)((longlong)in_RAX + (longlong)param_2) | bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)((longlong)in_RAX + -0x3cffea72) = *(char *)((longlong)in_RAX + -0x3cffea72) + cVar7;
  *param_1 = *param_1 + cVar5;
  *param_2 = *param_2 + (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  cVar3 = in(9);
  pcVar4 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3);
  pcVar4[-0x3cffea72] = pcVar4[-0x3cffea72] + cVar7;
  *param_1 = *param_1 + cVar5;
  *pcVar4 = *pcVar4 + cVar3;
  pcVar4[-0x3cffea72] = pcVar4[-0x3cffea72] + cVar7;
  *param_1 = *param_1 + cVar5;
  *pcVar4 = *pcVar4 + bVar6;
  *pcVar4 = *pcVar4 + cVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

