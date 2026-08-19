// Function: FUN_1404a1be4
// Addr: 1404a1be4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1be4(byte *param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char *in_RAX;
  undefined1 uVar4;
  byte bVar5;
  undefined6 uVar6;
  uint unaff_ESP;
  char *unaff_RSI;
  longlong unaff_RDI;
  
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar4 = (undefined1)param_2;
  bVar5 = (byte)((ulonglong)param_2 >> 8) | param_1[unaff_RDI];
  cVar1 = *(char *)CONCAT62(uVar6,CONCAT11(bVar5,uVar4));
  *(char *)CONCAT62(uVar6,CONCAT11(bVar5,uVar4)) =
       *(char *)CONCAT62(uVar6,CONCAT11(bVar5,uVar4)) + (char)param_1;
  if (!SCARRY1(cVar1,(char)param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = *param_1;
  bVar3 = (byte)in_RAX;
  *param_1 = *param_1 + bVar3;
  iRam00000001604b2d17 = iRam00000001604b2d17 + (int)in_RAX + (uint)CARRY1(bVar2,bVar3);
  cVar1 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + bVar3;
  if (!SCARRY1(cVar1,bVar3)) {
    in_RAX[CONCAT62(uVar6,CONCAT11(bVar5,6)) * 2] =
         in_RAX[CONCAT62(uVar6,CONCAT11(bVar5,6)) * 2] ^ bVar3;
    *in_RAX = *in_RAX + bVar3;
  }
  *(uint *)CONCAT62(uVar6,CONCAT11(bVar5,6)) =
       *(uint *)CONCAT62(uVar6,CONCAT11(bVar5,6)) & unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

