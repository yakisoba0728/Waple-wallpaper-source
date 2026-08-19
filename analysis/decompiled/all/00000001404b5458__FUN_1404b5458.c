// Function: FUN_1404b5458
// Addr: 1404b5458
// Size: 1 bytes


void FUN_1404b5458(char *param_1,undefined1 *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined3 uVar6;
  char cVar7;
  uint uVar8;
  char cVar11;
  undefined8 in_RAX;
  char *pcVar10;
  byte bVar12;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_retaddr;
  char *pcVar9;
  
  bVar12 = (byte)param_2;
  param_1[unaff_RSI] = param_1[unaff_RSI] | (byte)((ulonglong)in_RAX >> 8);
  cVar7 = (byte)in_RAX + 0x34;
  pcVar9 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar7);
  *pcVar9 = *pcVar9 + cVar7 + (0xcb < (byte)in_RAX);
  uVar8 = (uint)pcVar9 & *(uint *)(unaff_RSI + -0x79aeffe6);
  cVar7 = (char)uVar8 - *(char *)(ulonglong)uVar8;
  uVar6 = (undefined3)(uVar8 >> 8);
  pcVar9 = (char *)(ulonglong)CONCAT31(uVar6,cVar7);
  *(ulonglong *)(unaff_retaddr + -8) =
       CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *param_4 = *param_4 + (char)unaff_retaddr + -8;
  *pcVar9 = *pcVar9 + cVar7;
  cVar11 = (char)(uVar8 >> 8);
  *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       cVar11;
  LOCK();
  uVar2 = *param_2;
  *param_2 = unaff_BL;
  UNLOCK();
  pbVar1 = (byte *)(param_1 + -0x7a);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar12;
  cVar7 = (cVar7 - *pcVar9) - CARRY1(bVar3,bVar12);
  lVar5 = *(longlong *)(unaff_retaddr + -8);
  *(ulonglong *)(lVar5 + -8) =
       CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,uVar2)));
  *param_4 = *param_4 + (char)lVar5 + -8;
  *(char *)(ulonglong)CONCAT31(uVar6,cVar7) = *(char *)(ulonglong)CONCAT31(uVar6,cVar7) + cVar7;
  cVar7 = cVar7 + (char)((ulonglong)param_2 >> 8);
  pcVar10 = (char *)(ulonglong)CONCAT31(uVar6,cVar7);
  *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,uVar2))) =
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,uVar2))) + cVar11;
  LOCK();
  uVar4 = *param_2;
  *param_2 = uVar2;
  UNLOCK();
  pcVar9 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,uVar4))) +
                    0x4a + unaff_RBP);
  *pcVar9 = *pcVar9 + unaff_BH;
  *param_1 = *param_1 + cVar11;
  *pcVar10 = *pcVar10 + bVar12;
  *pcVar10 = *pcVar10 + cVar7;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

