// Function: FUN_1404afcb8
// Addr: 1404afcb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404afca2) overlaps instruction at (ram,0x0001404afca1)
    */

void FUN_1404afcb8(char param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  char *in_RAX;
  byte bVar7;
  char unaff_BL;
  char unaff_SPL;
  char *unaff_RSI;
  undefined1 in_CF;
  undefined1 in_ZF;
  
  bVar7 = (byte)param_2;
  do {
    bVar5 = (byte)in_RAX;
    if ((bool)in_CF) {
      *param_4 = *param_4 + (bVar5 + 1 ^ 0xe6);
      *(char *)(param_2 * 3) = *(char *)(param_2 * 3) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((bool)in_ZF) {
      out(0x14,(int)in_RAX);
      *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_2 >> 8);
    }
    else {
      pbVar1 = (byte *)(in_RAX + -0x19);
      bVar3 = *pbVar1;
      *pbVar1 = *pbVar1 + bVar7;
      bVar2 = CARRY1(bVar5,CARRY1(bVar3,bVar7));
      if (!bVar2) {
        in(0x14);
        uVar6 = in(0x14);
        *(char *)((ulonglong)uVar6 + 0x21004afb) =
             *(char *)((ulonglong)uVar6 + 0x21004afb) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      in_RAX = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5 + CARRY1(bVar3,bVar7) + bVar2)
                       ^ 0xe6);
    }
    *param_4 = *param_4 + unaff_SPL;
    bVar3 = (byte)in_RAX;
    *in_RAX = *in_RAX + bVar3;
    pbVar1 = (byte *)(in_RAX + -0x19);
    bVar5 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar7;
    in_CF = CARRY1(bVar3,CARRY1(bVar5,bVar7));
    cVar4 = bVar3 + CARRY1(bVar5,bVar7);
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4);
    in_ZF = cVar4 == '\0';
  } while( true );
}

