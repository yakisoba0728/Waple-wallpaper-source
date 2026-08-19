// Function: FUN_1404b7464
// Addr: 1404b7464
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7464(byte *param_1,uint *param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  longlong in_RAX;
  byte bVar6;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  undefined8 *puVar7;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  undefined8 uStack_10;
  
  bVar6 = (byte)param_1;
  *(uint *)(in_RAX + 0x47180021) = *(uint *)(in_RAX + 0x47180021) | (uint)unaff_RBP;
  uVar5 = (int)in_RAX + 0xe2b8df00;
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                    0x4b + unaff_RSI * 2);
  *pcVar1 = *pcVar1 + unaff_BH;
  *param_1 = *param_1 + (char)(uVar5 >> 8);
  *param_2 = *param_2 | uVar5;
  bVar2 = *param_1;
  *param_1 = *param_1 + bVar6;
  uVar5 = -(uint)CARRY1(bVar2,bVar6) + 0x29d9d620;
  pcVar1 = (char *)((ulonglong)uVar5 + 0x21004b73);
  *pcVar1 = *pcVar1 + (char)param_2;
  *param_2 = *param_2 | uVar5;
  bVar3 = *param_1;
  *param_1 = *param_1 + bVar6;
  puVar7 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar4 = '\t';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar7 = puVar7 + -1;
    *puVar7 = *unaff_RBP;
    cVar4 = cVar4 + -1;
  } while ('\0' < cVar4);
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                    0x921004b + unaff_RSI * 2);
  *pcVar1 = *pcVar1 + (char)((-(uint)CARRY1(bVar2,bVar6) + 0xc92a320) - (uint)CARRY1(bVar3,bVar6) >>
                            8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

