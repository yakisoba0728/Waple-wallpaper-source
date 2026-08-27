// Function: FUN_1403ce860
// Addr: 1403ce860
// Size: 411 bytes


char * FUN_1403ce860(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = (char *)*param_1;
  if (pcVar5 == (char *)0x0) {
    pcVar6 = (char *)0x0;
    while( true ) {
      pcVar3 = (char *)FUN_14028af20(0x18);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = (char *)0x0;
      }
      else {
        *pcVar3 = '\0';
        iVar2 = DWriteCreateFactory(0,&DAT_140470b68,pcVar3 + 8);
        if (iVar2 == 0) {
          pcVar4 = (char *)FUN_14028af20(0x70);
          pcVar5 = pcVar6;
          if (pcVar4 != (char *)0x0) {
            *(undefined ***)pcVar4 = DWriteFontFileLoader::vftable;
            pcVar4[8] = '\0';
            pcVar4[9] = '\0';
            pcVar4[10] = '\0';
            pcVar4[0xb] = '\0';
            InitializeCriticalSection((LPCRITICAL_SECTION)(pcVar4 + 0x10));
            pcVar4[0x38] = '\0';
            pcVar4[0x39] = '\0';
            pcVar4[0x3a] = '\0';
            pcVar4[0x3b] = '\0';
            pcVar4[0x3c] = '\0';
            pcVar4[0x40] = '\0';
            pcVar4[0x41] = '\0';
            pcVar4[0x42] = '\0';
            pcVar4[0x43] = '\0';
            pcVar4[0x44] = '\0';
            pcVar4[0x45] = '\0';
            pcVar4[0x46] = '\0';
            pcVar4[0x47] = '\0';
            pcVar4[0x38] = '\x01';
            pcVar4[0x39] = '\0';
            pcVar4[0x3a] = '\0';
            pcVar4[0x3b] = '\0';
            pcVar4[0x3c] = '\x01';
            pcVar4[0x40] = '\0';
            pcVar4[0x41] = '\0';
            pcVar4[0x42] = '\0';
            pcVar4[0x43] = '\0';
            pcVar4[0x44] = '\0';
            pcVar4[0x45] = '\0';
            pcVar4[0x46] = '\0';
            pcVar4[0x47] = '\0';
            pcVar4[0x48] = '\x01';
            pcVar4[0x4a] = '\0';
            pcVar4[0x4b] = '\0';
            pcVar4[0x4c] = '\0';
            pcVar4[0x4d] = '\0';
            pcVar4[0x4e] = '\0';
            pcVar4[0x4f] = '\0';
            pcVar4[0x50] = '\0';
            pcVar4[0x51] = '\0';
            pcVar4[0x52] = '\0';
            pcVar4[0x53] = '\0';
            pcVar4[0x54] = '\0';
            pcVar4[0x55] = '\0';
            pcVar4[0x56] = '\0';
            pcVar4[0x57] = '\0';
            pcVar4[0x58] = '\0';
            pcVar4[0x59] = '\0';
            pcVar4[0x5a] = '\0';
            pcVar4[0x5b] = '\0';
            pcVar4[0x60] = '\0';
            pcVar4[0x61] = '\0';
            pcVar4[0x62] = '\0';
            pcVar4[99] = '\0';
            pcVar4[100] = '\0';
            pcVar4[0x65] = '\0';
            pcVar4[0x66] = '\0';
            pcVar4[0x67] = '\0';
            pcVar4[0x68] = '\0';
            pcVar4[0x69] = '\0';
            pcVar4[0x6a] = '\0';
            pcVar4[0x6b] = '\0';
            pcVar4[0x6c] = '\0';
            pcVar4[0x6d] = '\0';
            pcVar4[0x6e] = '\0';
            pcVar4[0x6f] = '\0';
            pcVar4[8] = '\x01';
            pcVar4[9] = '\0';
            pcVar4[10] = '\0';
            pcVar4[0xb] = '\0';
            pcVar5 = pcVar4;
          }
          *(char **)(pcVar3 + 0x10) = pcVar5;
          (**(code **)(**(longlong **)(pcVar3 + 8) + 0x68))(*(longlong **)(pcVar3 + 8),pcVar5);
          *pcVar3 = '\x01';
        }
      }
      pcVar5 = pcVar6;
      if (pcVar3 != (char *)0x0) {
        if (*pcVar3 == '\0') {
          if (*(longlong **)(pcVar3 + 0x10) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(pcVar3 + 0x10) + 0x10))();
          }
          if (*(longlong **)(pcVar3 + 8) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(pcVar3 + 8) + 0x10))();
          }
          thunk_FUN_14028af80(pcVar3,0x18);
        }
        else {
          FUN_14028b410(FUN_1403c4be0);
          pcVar5 = pcVar3;
        }
      }
      LOCK();
      lVar1 = *param_1;
      if (lVar1 == 0) {
        *param_1 = (longlong)pcVar5;
      }
      UNLOCK();
      if (lVar1 == 0) break;
      if (pcVar5 != (char *)0x0) {
        if (*(longlong **)(pcVar5 + 0x10) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(pcVar5 + 0x10) + 0x10))();
        }
        if (*(longlong **)(pcVar5 + 8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(pcVar5 + 8) + 0x10))();
        }
        thunk_FUN_14028af80(pcVar5,0x18);
      }
      if ((char *)*param_1 != (char *)0x0) {
        return (char *)*param_1;
      }
    }
  }
  return pcVar5;
}

