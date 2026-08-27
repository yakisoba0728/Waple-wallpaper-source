// Function: FUN_14003dd40
// Addr: 14003dd40
// Size: 293 bytes


bool FUN_14003dd40(void)

{
  int iVar1;
  int iVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  ushort *puVar5;
  WCHAR local_48 [20];
  
  if (DAT_1404dfbe8 < 0) {
    local_48[8] = L'\0';
    local_48[9] = L'\0';
    local_48[10] = L'\0';
    local_48[0xb] = L'\0';
    local_48[0] = L'\0';
    local_48[1] = L'\0';
    local_48[2] = L'\0';
    local_48[3] = L'\0';
    local_48[4] = L'\0';
    local_48[5] = L'\0';
    local_48[6] = L'\0';
    local_48[7] = L'\0';
    iVar1 = GetLocaleInfoEx((LPCWSTR)0x0,0x1003,local_48,0xc);
    if (iVar1 != 0) {
      pWVar3 = local_48;
      if (local_48[0] != L'\0') {
        if (local_48[0] == L'\0') goto LAB_14003ddc2;
LAB_14003dda0:
        do {
          iVar1 = toupper((uint)(ushort)*pWVar3);
          iVar2 = toupper(0x74);
          if (iVar1 != iVar2) {
            pWVar3 = pWVar3 + 1;
            if (*pWVar3 != L'\0') goto LAB_14003dda0;
          }
LAB_14003ddc2:
          if (*pWVar3 == L'\0') {
            DAT_1404dfbe8 = 0;
            return false;
          }
          puVar5 = (ushort *)&DAT_140475c00;
          iVar1 = toupper((uint)(ushort)*pWVar3);
          iVar2 = toupper(0x74);
          pWVar4 = pWVar3;
          if (iVar1 == iVar2) {
            do {
              puVar5 = puVar5 + 1;
              if (*puVar5 == 0) {
                DAT_1404dfbe8 = 1;
                return true;
              }
              iVar1 = toupper((uint)(ushort)pWVar4[1]);
              iVar2 = toupper((uint)*puVar5);
              pWVar4 = pWVar4 + 1;
            } while (iVar1 == iVar2);
          }
          pWVar3 = pWVar3 + 1;
        } while (*pWVar3 != L'\0');
      }
      DAT_1404dfbe8 = 0;
      return false;
    }
  }
  return DAT_1404dfbe8 == 1;
}

