// Function: FUN_1404abc78
// Addr: 1404abc78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abc78(undefined8 param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint *in_RAX;
  undefined6 uVar7;
  byte *pbVar5;
  char *pcVar6;
  char cVar8;
  uint unaff_EBX;
  longlong unaff_RBP;
  undefined8 in_MM0;
  
  *in_RAX = *in_RAX & unaff_EBX;
  bVar3 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX | bVar3;
  cVar8 = (char)(param_2 >> 8);
  cVar2 = (char)((ulonglong)in_RAX >> 8) - cVar8;
  uVar7 = (undefined6)((ulonglong)in_RAX >> 0x10);
  pbVar5 = (byte *)CONCAT71((int7)(CONCAT62(uVar7,CONCAT11(cVar2,bVar3)) >> 8),bVar3);
  pmulhuw(in_MM0,uRam00000001469ec687);
  cRam00000001b04acac1 = cRam00000001b04acac1 + bVar3;
  TaskRegister(*(undefined2 *)(unaff_RBP + -0x67fff070));
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar3;
  if (!SCARRY1(bVar1,bVar3)) {
    TaskRegister(*(undefined2 *)(unaff_RBP + -0x67fff070));
    *pbVar5 = *pbVar5 | bVar3;
    uVar4 = (int)CONCAT62(uVar7,CONCAT11((cVar2 + cVar8) * '\x02',bVar3)) + 0x6540000;
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
    pcVar6 = (char *)((ulonglong)uVar4 ^ 0xe);
    pcVar6[-0x70] = pcVar6[-0x70] + cVar8;
    TaskRegister(*(undefined2 *)(unaff_RBP + -0x67fff070));
    uRam000000006d210fdd = TaskRegister();
    uRam00000001044fbce4 = uRam00000001044fbce4 & param_2;
    *(char *)(unaff_RBP + -0x7fff06d) =
         *(char *)(unaff_RBP + -0x7fff06d) + (char)pcVar6 + *pcVar6 + 'd';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  verw();
  *pbVar5 = *pbVar5 + bVar3;
  *pbVar5 = *pbVar5 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

