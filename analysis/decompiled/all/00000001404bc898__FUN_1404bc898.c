// Function: FUN_1404bc898
// Addr: 1404bc898
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc898(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  undefined2 uVar2;
  byte bVar3;
  uint uVar4;
  char cVar7;
  byte *in_RAX;
  undefined7 uVar8;
  char *pcVar5;
  int *piVar6;
  char cVar9;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  int unaff_ESP;
  longlong unaff_RSI;
  
  cVar9 = (char)((ulonglong)param_1 >> 8);
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar3 = (byte)in_RAX & *in_RAX;
  bVar1 = *(byte *)CONCAT71(uVar8,bVar3);
  *param_4 = *param_4 + (char)unaff_ESP;
  uVar4 = (int)CONCAT71(uVar8,bVar3 & bVar1) + 0x54050002;
  *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 | (byte)uVar4;
  *param_2 = *param_2 + '\x01';
  uVar2 = (undefined2)(uVar4 >> 0x10);
  cVar7 = (char)(uVar4 >> 8) + cVar9;
  pcVar5 = (char *)CONCAT71((uint7)CONCAT21(uVar2,cVar7),0x4a);
  *param_1 = *param_1 + cVar7;
  *pcVar5 = *pcVar5 + 'J';
  pcVar5[0x260022fd] = pcVar5[0x260022fd] + (char)param_2;
  *param_2 = *param_2 + '\x01';
  *param_1 = *param_1 + 'J';
  uVar4 = (uint)CONCAT71((uint7)CONCAT21(uVar2,cVar7 + cVar9),0x4a) |
          *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  piVar6 = (int *)(ulonglong)uVar4;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)param_1;
  *piVar6 = *piVar6 + unaff_ESP;
  cVar7 = (char)uVar4;
  *(char *)((longlong)piVar6 + unaff_RSI) = *(char *)((longlong)piVar6 + unaff_RSI) + cVar7;
  *(char *)piVar6 = (char)*piVar6 + cVar7;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & (uint)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

