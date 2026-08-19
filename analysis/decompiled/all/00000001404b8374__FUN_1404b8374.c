// Function: FUN_1404b8374
// Addr: 1404b8374
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404b83e5) */

void FUN_1404b8374(char *param_1,byte *param_2,undefined8 param_3,undefined1 *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte bVar5;
  uint *in_RAX;
  char *pcVar4;
  int *piVar6;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  int unaff_EBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  bool in_OF;
  
  bVar1 = (byte)in_RAX;
  if (!in_OF) {
    *param_4 = *param_4;
    *(byte *)in_RAX = (char)*in_RAX + bVar1;
    cVar2 = (char)((ulonglong)param_2 >> 8);
    *(char *)in_RAX = (char)*in_RAX + cVar2;
    cRam000000015e49f383 = cRam000000015e49f383 + '\x01';
    *(char *)((longlong)in_RAX + -0x7e) = *(char *)((longlong)in_RAX + -0x7e) + cVar2;
    *param_4 = *param_4;
    *param_2 = *param_2 | bVar1;
    *(char *)in_RAX = (char)*in_RAX + (char)param_1;
    if ((char)*in_RAX != '\0') {
      param_1[-0x6affe201] = param_1[-0x6affe201] + (char)param_2;
      pcVar4 = (char *)(*(code *)0x18bce2b9b)();
      *param_1 = *param_1 + (char)((ulonglong)pcVar4 >> 8);
      *pcVar4 = *pcVar4 + (char)pcVar4;
      param_1[-0x6affe201] = param_1[-0x6affe201] + (char)param_2;
      in_RAX = (uint *)(*(code *)0x18bce2bab)();
      *param_1 = *param_1 + (char)in_RAX;
      *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
           *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
           (uint)in_RAX;
    }
    *param_1 = *param_1 + (char)param_1;
    *(int *)((longlong)in_RAX * 2) = *(int *)((longlong)in_RAX * 2) + (int)param_2;
    piVar6 = (int *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                             CONCAT11((char)((ulonglong)param_2 >> 8) + (char)*in_RAX,(char)param_2)
                            );
    *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
    *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         unaff_EBP;
    *in_RAX = *in_RAX | (uint)in_RAX;
    uVar3 = (uint)in_RAX | *in_RAX;
    pcVar4 = (char *)(ulonglong)uVar3;
    *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         ((char)param_1 - (char)*(undefined4 *)((longlong)in_RAX + 0x7826000a));
    *piVar6 = *piVar6 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    cVar2 = (char)uVar3;
    pcVar4[unaff_RSI] = pcVar4[unaff_RSI] + cVar2;
    *pcVar4 = *pcVar4 + cVar2;
    *(int *)(pcVar4 + unaff_RDI) = *(int *)(pcVar4 + unaff_RDI) + (int)piVar6;
    *(char *)piVar6 = (char)*piVar6 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000000f8508300 = uRam00000000f8508300 & (uint)in_RAX;
  *in_RAX = *in_RAX | (uint)in_RAX;
  bVar5 = (byte)((ulonglong)in_RAX >> 8);
  pcVar4 = (char *)(ulonglong)
                   (((int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                   CONCAT11(bVar5 + unaff_BH,bVar1)) + -0x1dfc3800) -
                   (uint)CARRY1(bVar5,unaff_BH));
  *pcVar4 = *pcVar4 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

