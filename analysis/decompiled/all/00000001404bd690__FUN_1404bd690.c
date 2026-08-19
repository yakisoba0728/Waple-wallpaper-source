// Function: FUN_1404bd690
// Addr: 1404bd690
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bd6c0) overlaps instruction at (ram,0x0001404bd6bf)
    */

void FUN_1404bd690(char *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  byte bVar5;
  char *in_RAX;
  uint *puVar4;
  char cVar6;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *unaff_RBP;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  
  uVar7 = (ulonglong)((uint)&stack0x00000000 ^ uRam000000018c215297);
  bVar5 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar5;
  *in_RAX = *in_RAX + (char)in_RAX;
  cVar3 = (char)in_RAX + (char)((ulonglong)param_2 >> 8);
  bVar5 = bVar5 ^ bRam00000001657f18a3;
  puVar4 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar5,cVar3));
  pcVar1 = (char *)((longlong)unaff_RBP + param_2 * 8 + 0x4b);
  *pcVar1 = *pcVar1 + unaff_BH;
  *param_1 = *param_1 + cVar3;
  *puVar4 = *puVar4 | (uint)puVar4;
  if ((int)*puVar4 < 0) {
    puVar4 = (uint *)CONCAT71((int7)((ulonglong)puVar4 >> 8),cVar3 + '0');
  }
  else {
    *(char *)puVar4 = (char)*puVar4 + (char)param_2;
    *(int *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(int *)CONCAT44(unaff_00000034,unaff_ESI) +
         CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    cVar3 = *param_1;
    cVar6 = (char)param_1;
    *param_1 = *param_1 + cVar6;
    cVar2 = *param_1;
    param_1 = param_1 + -1;
    if (param_1 == (char *)0x0 || cVar2 == '\0') {
      if (!SCARRY1(cVar3,cVar6)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *param_1 = *param_1 + bVar5;
      puVar4 = (uint *)(ulonglong)((uint)puVar4 ^ 0xf8350012);
      goto code_r0x0001404bd6c6;
    }
  }
  *(char *)puVar4 = (char)*puVar4 + (char)puVar4;
  uRam000000013880d6d8 = uRam000000013880d6d8 & unaff_ESI;
code_r0x0001404bd6c6:
  *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
  *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       (char)((uint)((int)puVar4 + 0x6e82f00) >> 8);
  puVar8 = (undefined8 *)(uVar7 - 8);
  *(undefined8 **)(uVar7 - 8) = unaff_RBP;
  cVar3 = '\x1a';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar8 = puVar8 + -1;
    *puVar8 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  *(ulonglong *)(uVar7 - 0xe0) = uVar7 - 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

