// Function: FUN_1404cb70c
// Addr: 1404cb70c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb70c(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  uint *in_RAX;
  char *pcVar4;
  char *pcVar5;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  bool in_OF;
  
  if (in_OF) {
    pcVar5 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x7ffcc1f);
    *pcVar5 = *pcVar5 + (char)((ulonglong)param_1 >> 8);
    pcVar4 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x4c,(char)param_1));
    cVar3 = (char)((ulonglong)in_RAX >> 8);
    *pcVar4 = *pcVar4 + cVar3;
    *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
    pcVar5 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x54ffcc1f);
    *pcVar5 = *pcVar5 + (char)param_1;
    pcVar4 = pcVar4 + -1;
    if (pcVar4 != (char *)0x0 && *pcVar5 == '\0') {
      *param_4 = *param_4 + unaff_BL;
      *param_2 = *param_2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar1 = (char)in_RAX + unaff_BH;
    in_RAX = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
    param_1 = (char *)CONCAT62((int6)((ulonglong)pcVar4 >> 0x10),CONCAT11(0x4c,(char)pcVar4));
    *param_1 = *param_1 + cVar3;
    *(char *)in_RAX = (char)*in_RAX + cVar1;
    *(char *)((longlong)in_RAX + -0x1f) =
         *(char *)((longlong)in_RAX + -0x1f) + (char)((ulonglong)param_2 >> 8);
  }
  uVar2 = (uint)in_RAX ^ *in_RAX;
  in((short)param_2);
  pcVar5 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x4c,(char)param_1));
  *pcVar5 = *pcVar5 + ((byte)(uVar2 >> 8) ^ (byte)((uint)*(undefined4 *)(ulonglong)uVar2 >> 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

