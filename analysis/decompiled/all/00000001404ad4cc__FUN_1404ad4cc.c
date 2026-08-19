// Function: FUN_1404ad4cc
// Addr: 1404ad4cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad4cc(longlong param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int *in_RAX;
  int *piVar5;
  char *pcVar6;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 *puVar7;
  uint unaff_EBP;
  char *pcVar4;
  
  out(0x11,(char)in_RAX);
  pcVar4 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0xa01004a +
                   (longlong)param_2 * 8);
  *pcVar4 = *pcVar4 + (char)((ulonglong)param_1 >> 8);
  do {
    uVar3 = (int)in_RAX + 0x6620a00;
    pcVar4 = (char *)(ulonglong)uVar3;
    if (param_1 == 1 || uVar3 == 0) {
      if (!SCARRY4((int)in_RAX,0x6620a00)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      puVar7 = (undefined8 *)((longlong)register0x00000020 + -8);
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
      *puVar7 = pcVar4;
    }
    cVar1 = (char)uVar3;
    *pcVar4 = *pcVar4 + cVar1;
    uRam00000001744fd4ec = uRam00000001744fd4ec & uVar3;
    in_RAX = (int *)(ulonglong)uVar3;
    param_1 = param_1 + -2;
  } while (param_1 != 0 && cVar1 != '\0');
  *in_RAX = *in_RAX + uVar3;
  pcVar6 = (char *)(ulonglong)((uint)param_1 + unaff_EBP);
  *in_RAX = *in_RAX + uVar3 + (uint)CARRY4((uint)param_1,unaff_EBP);
  bVar2 = cVar1 - 0x2c;
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar2);
  *pcVar6 = *pcVar6 + (char)register0x00000020;
  *param_2 = *param_2 + bVar2;
  *pcVar4 = *pcVar4 + bVar2;
  bVar2 = CARRY1(bVar2 ^ 0xc,(byte)(uVar3 >> 8));
  *(undefined **)((longlong)register0x00000020 + -8) = &UNK_1404ad506;
  piVar5 = (int *)func_0x0001294bd517();
  *piVar5 = *piVar5 + (int)piVar5 + (uint)bVar2;
  bVar2 = (char)piVar5 - 0x2c;
  pcVar4 = (char *)CONCAT71((int7)((ulonglong)piVar5 >> 8),bVar2);
  *pcVar6 = *pcVar6 + (char)register0x00000020;
  *pcVar4 = *pcVar4 + bVar2;
  bVar2 = CARRY1(bVar2,(byte)((ulonglong)piVar5 >> 8));
  *(undefined **)((longlong)register0x00000020 + -8) = &UNK_1404ad516;
  piVar5 = (int *)func_0x0001294bd527();
  *piVar5 = *piVar5 + (int)piVar5 + (uint)bVar2;
  *pcVar6 = *pcVar6 + (char)piVar5 + -0x2c;
  if ((POPCOUNT(*pcVar6) & 1U) == 0) {
    pcVar4 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0xc);
    *pcVar4 = *pcVar4 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

