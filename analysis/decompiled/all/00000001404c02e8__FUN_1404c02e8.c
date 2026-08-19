// Function: FUN_1404c02e8
// Addr: 1404c02e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c031d) overlaps instruction at (ram,0x0001404c031c)
    */

void FUN_1404c02e8(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte bVar3;
  char *in_RAX;
  undefined4 uVar5;
  byte *pbVar4;
  byte bVar6;
  char cVar7;
  char unaff_BH;
  longlong lVar8;
  undefined4 *unaff_RSI;
  bool bVar9;
  bool in_OF;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  bVar6 = (byte)param_2;
  uVar5 = (undefined4)((ulonglong)in_RAX >> 0x20);
  if (in_OF) {
    *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + bVar6;
    in_RAX[param_1] = in_RAX[param_1] + cVar7;
    in_RAX[0x22] = in_RAX[0x22] + cVar7;
    *in_RAX = *in_RAX - (char)in_RAX;
    pbVar4 = (byte *)CONCAT44(uVar5,*unaff_RSI);
    bVar9 = CARRY1(*pbVar4,bVar6);
    *pbVar4 = *pbVar4 + bVar6;
    lVar8 = 0xd01004a;
  }
  else {
    *in_RAX = *in_RAX - (char)in_RAX;
    uVar2 = *unaff_RSI;
    pbVar4 = (byte *)CONCAT44(uVar5,uVar2);
    *pbVar4 = *pbVar4 + bVar6;
    lVar8 = 0x21004a;
    bVar3 = (byte)uVar2;
    bVar9 = CARRY1(*pbVar4,bVar3);
    bVar1 = *pbVar4;
    *pbVar4 = *pbVar4 + bVar3;
    if (!SCARRY1(bVar1,bVar3)) {
      *pbVar4 = *pbVar4 - bVar3;
      *(char *)CONCAT44(uVar5,unaff_RSI[1]) = *(char *)CONCAT44(uVar5,unaff_RSI[1]) + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(char *)(lVar8 + 0xd01004a) = *(char *)(lVar8 + 0xd01004a) + unaff_BH + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

