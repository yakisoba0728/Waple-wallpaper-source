// Function: FUN_1404cd918
// Addr: 1404cd918
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404cd968) */

void FUN_1404cd918(int *param_1,byte *param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint in_EAX;
  uint uVar5;
  char *pcVar6;
  char cVar7;
  char unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  uint unaff_EBP;
  char *unaff_RSI;
  byte *unaff_RDI;
  
  uVar5 = (in_EAX | 0x70) + 0xf4050002;
  pcVar6 = (char *)(ulonglong)uVar5;
  bVar4 = (byte)uVar5;
  bVar2 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + unaff_BH;
  if (SCARRY1(bVar2,unaff_BH)) {
    *pcVar6 = *pcVar6 + unaff_BH;
    *pcVar6 = *pcVar6 + bVar4;
    pcVar1 = pcVar6 + 0x3f004170;
    cVar3 = *pcVar1;
    cVar7 = (char)param_2;
    *pcVar1 = *pcVar1 + cVar7;
    if (SCARRY1(cVar3,cVar7)) {
      *pcVar6 = *pcVar6 + unaff_BH;
      *(uint *)((longlong)pcVar6 * 2) = *(uint *)((longlong)pcVar6 * 2) & (uint)param_1;
      *(uint *)(pcVar6 + 0xb) = *(uint *)(pcVar6 + 0xb) & unaff_EBP;
      *(char *)param_1 = (char)*param_1 + unaff_BL;
      *param_1 = *param_1 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
      cRam000000014a2ce541 = cRam000000014a2ce541 + (char)param_1;
      *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
      pcVar6[CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) * 8 +
             0x3128004c] =
           pcVar6[CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) * 8
                  + 0x3128004c] + cVar7 + pcVar6[0x50];
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *unaff_RSI = *unaff_RSI + bVar4;
    *param_2 = *param_2 | bVar4;
    *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         CONCAT22((short)((ulonglong)param_1 >> 0x10),
                  CONCAT11((char)((ulonglong)param_1 >> 8) + (char)((ulonglong)param_2 >> 8),
                           (char)param_1));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

