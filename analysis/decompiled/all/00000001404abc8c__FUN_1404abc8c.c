// Function: FUN_1404abc8c
// Addr: 1404abc8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abc8c(undefined8 param_1,uint param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *in_RAX;
  char *pcVar4;
  char cVar5;
  char unaff_SPL;
  longlong unaff_RBP;
  bool in_OF;
  
  if (in_OF) {
    *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  TaskRegister(*(undefined2 *)(unaff_RBP + -0x67fff070));
  bVar1 = *in_RAX;
  bVar2 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar2;
  if (!SCARRY1(bVar1,bVar2)) {
    TaskRegister(*(undefined2 *)(unaff_RBP + -0x67fff070));
    *in_RAX = *in_RAX | bVar2;
    cVar5 = (char)(param_2 >> 8);
    uVar3 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                          CONCAT11(((char)((ulonglong)in_RAX >> 8) + cVar5) * '\x02',bVar2)) +
            0x6540000;
    *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
    pcVar4 = (char *)((ulonglong)uVar3 ^ 0xe);
    pcVar4[-0x70] = pcVar4[-0x70] + cVar5;
    TaskRegister(*(undefined2 *)(unaff_RBP + -0x67fff070));
    uRam000000006d210fdd = TaskRegister();
    uRam00000001044fbce4 = uRam00000001044fbce4 & param_2;
    *(char *)(unaff_RBP + -0x7fff06d) =
         *(char *)(unaff_RBP + -0x7fff06d) + (char)pcVar4 + *pcVar4 + 'd';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  verw();
  *in_RAX = *in_RAX + bVar2;
  *in_RAX = *in_RAX + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

