// Function: FUN_1404ce4b4
// Addr: 1404ce4b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ce4d4) overlaps instruction at (ram,0x0001404ce4d3)
    */

void FUN_1404ce4b4(byte *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  int *in_RAX;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  char *unaff_RSI;
  char *unaff_RDI;
  char in_R10B;
  char unaff_R13B;
  char *pcVar3;
  
  uVar8 = (undefined2)((ulonglong)param_2 >> 0x10);
  uVar7 = (undefined1)((ulonglong)param_2 >> 8);
  bVar6 = (byte)param_2;
  if (((ulonglong)in_RAX & 0x2e0204) == 0) {
    param_1 = (byte *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                               CONCAT11((char)((ulonglong)param_1 >> 8) + *unaff_RSI,(char)param_1))
    ;
  }
  cVar2 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar2;
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar6;
  *unaff_RDI = *unaff_RDI + cVar2 + CARRY1(bVar1,bVar6);
  *(byte *)in_RAX = (char)*in_RAX + bVar6;
  *param_2 = *param_2 + (int)param_2;
  bVar1 = *param_1;
  *param_1 = *param_1 + (char)param_1;
  if (param_1 + -1 == (byte *)0x0 || *param_1 == 0) {
    if (!SCARRY1(bVar1,(char)param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)((longlong)in_RAX + -0x4a) = *(char *)((longlong)in_RAX + -0x4a) + bVar6;
    in_RAX = (int *)((ulonglong)(uint)((int)in_RAX - *in_RAX) | 0xe4);
  }
  else {
    *(char *)in_RAX = (char)*in_RAX + cVar2;
    uVar7 = 0x2b;
  }
  *(char *)in_RAX = (char)*in_RAX + unaff_R13B;
  uVar4 = (uint)(param_1 + -1) ^ CONCAT22(uVar8,CONCAT11(uVar7,bVar6));
  cRam000000014a4d31ca = cRam000000014a4d31ca + in_R10B;
  pbVar5 = (byte *)(ulonglong)
                   CONCAT22((short)(uVar4 >> 0x10),
                            CONCAT11(*unaff_RSI + '\x04' + (char)in_RAX,(char)uVar4));
  cVar2 = (char)in_RAX +
          *(char *)CONCAT44((int)((ulonglong)param_2 >> 0x20),CONCAT22(uVar8,CONCAT11(uVar7,bVar6)))
  ;
  pcVar3 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  *pcVar3 = *pcVar3 + cVar2;
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar6;
  *unaff_RDI = *unaff_RDI + cVar2 + CARRY1(bVar1,bVar6);
  *pcVar3 = *pcVar3 + bVar6;
  *(int *)((longlong)pcVar3 * 2) =
       *(int *)((longlong)pcVar3 * 2) + CONCAT22(uVar8,CONCAT11(uVar7,bVar6));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

