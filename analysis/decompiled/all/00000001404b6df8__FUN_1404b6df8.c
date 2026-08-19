// Function: FUN_1404b6df8
// Addr: 1404b6df8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b6e63) overlaps instruction at (ram,0x0001404b6e61)
    */

void FUN_1404b6df8(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int *in_RAX;
  char *pcVar5;
  int *piVar6;
  uint *puVar7;
  char cVar8;
  byte bVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  bool in_SF;
  
  uVar11 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar10 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  cVar8 = (char)param_2;
  if (in_SF) {
    pbVar1 = (byte *)((longlong)in_RAX + -0x37ffe405);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar9;
    uVar4 = ((int)in_RAX - *in_RAX) - (uint)CARRY1(bVar2,bVar9);
  }
  else {
    *param_4 = *param_4;
    *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + (char)in_RAX;
    *(char *)((longlong)in_RAX + 5) =
         *(char *)((longlong)in_RAX + 5) + (char)((ulonglong)param_1 >> 8);
    *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
    pcVar5 = (char *)((ulonglong)in_RAX ^ 0xe);
    cVar3 = (char)pcVar5;
    *pcVar5 = *pcVar5 + cVar3;
    *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         -*(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    *param_2 = *param_2 + cVar8;
    *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         -*(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    pcVar5[0x69] = pcVar5[0x69] + unaff_BH;
    *param_4 = *param_4;
    *pcVar5 = *pcVar5 + cVar3;
    *pcVar5 = *pcVar5 + cVar3;
    *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         -*(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    *param_2 = *param_2 + cVar8;
    *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         -*(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    pcVar5[0x69] = pcVar5[0x69] + unaff_BH;
    *param_4 = *param_4 + cVar3;
    uVar4 = (uint)pcVar5 | *(uint *)((longlong)pcVar5 * 2);
    cVar3 = *unaff_RSI;
    *unaff_RSI = *unaff_RSI + (char)uVar4;
    cVar8 = '\x02';
    if (!SCARRY1(cVar3,(char)uVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *param_4 = *param_4;
  *(char *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(bVar9,cVar8))) =
       *(char *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(bVar9,cVar8))) + cVar8;
  in(0xe);
  cRam00000001454b7bd5 = cRam00000001454b7bd5 + (char)param_1;
  piVar6 = (int *)CONCAT71((uint7)(uint3)(uVar4 >> 8),0xfb);
  uVar4 = (int)piVar6 - *piVar6;
  puVar7 = (uint *)(ulonglong)uVar4;
  *puVar7 = *puVar7 & uVar4;
  *(char *)puVar7 = (char)*puVar7 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

