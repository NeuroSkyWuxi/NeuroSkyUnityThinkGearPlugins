using UnityEngine;
using System.Collections;

public class PreserveOnReload : MonoBehaviour
{
    void Awake()
    {
        DontDestroyOnLoad(this);
    }
}
